<?php
/**
 * The template for displaying all pages.
 *
 * Template Name: Document Page
 * Description: Page template with a content container and right sidebar
 *
 * @package WordPress
 * @subpackage WP-Bootstrap
 * @since WP-Bootstrap 0.1
 *
 * Last Revised: July 16, 2012
 */

get_header(); ?>
<?php while ( have_posts() ) : the_post(); ?>
<div class="main-content">
  <div class="row">
  <div class="container">
   <?php if ( function_exists( 'bootstrapwp_breadcrumbs' ) ) bootstrapwp_breadcrumbs(); ?>
   </div><!--/.container -->
   </div><!--/.row -->
   <div class="container">
      <header class="page-title">
        <h1><?php the_title();?></h1>
      </header>

      <div class="container">
      <div class="row">
        <div class="span3" id="toc"></div>
	<div class="span9 offset3" id="doc">
   	  <?php include_once "markdown.php"; $docmd=file_get_contents("./docs/" . get_the_title() . ".md"); $doc = Markdown($docmd); echo $doc; ?>
	</div>
      </div>
      </div>

<?php endwhile; // end of the loop. ?>
      </div><!-- /.span8 -->
</div>
</div>

</div>
</div>

<?php get_footer(); ?>
