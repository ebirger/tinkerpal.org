<?php
/**
 * The template for displaying all pages.
 *
 * Template Name: Default Page
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
<!--  <div class="row">
  <div class="container">
   <?php if ( function_exists( 'bootstrapwp_breadcrumbs' ) ) bootstrapwp_breadcrumbs(); ?>
   </div>
   </div> -->
   <div class="container">
      <header class="page-title">
        <h1><?php the_title();?></h1>
      </header>

      <div class="row content">
	<div class="span8">

<?php endwhile; // end of the loop. ?>
      </div><!-- /.span8 -->
<div class="span4"/>

<div class="main-content">
<div class="container">
  <div class="marketing marketing-left">
  <div class="row-fluid">
    <div class="span4">
      <?php
if ( function_exists( 'dynamic_sidebar' ) ) dynamic_sidebar( "home-left" );
?>
    </div>
    <div class="span4">
      <?php
if ( function_exists( 'dynamic_sidebar' ) ) dynamic_sidebar( "home-middle" );
?>
    </div>
    <div class="span4">
      <?php
if ( function_exists( 'dynamic_sidebar' ) ) dynamic_sidebar( "home-right" );
?>
    </div>
  </div>
</div>
</div><!-- /.marketing -->
</div>
<div class="home-examples">
  <div class="container">
    <div class="row">
    <div class="span12">
      <?php
if ( function_exists( 'dynamic_sidebar' ) ) dynamic_sidebar( "examples-left" );
?>
</div>
</div>
</div>
</div>
</div>
</div>
</div>

</div>
</div>

<?php get_footer(); ?>
