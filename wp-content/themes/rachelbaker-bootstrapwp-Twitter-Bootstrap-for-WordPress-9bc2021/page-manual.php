<?php
/**
 * The template for displaying all pages.
 *
 * Template Name: Manual Page
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

      <div class="row">
        <div class="span3"><div id="toc"></div></div>
	<div class="span9"><h1>title1</h1>text1<h2>title2</h2>text2<h3>title3</h3>text3</div>
      </div>

<?php endwhile; // end of the loop. ?>
      </div><!-- /.span8 -->
</div>
</div>

</div>
</div>

<?php get_footer(); ?>
