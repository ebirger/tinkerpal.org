<?php
/**
 * Template Name: Home Hero Template with 3 widget areas
 *
 *
 * @package WP-Bootstrap
 * @subpackage Default_Theme
 * @since WP-Bootstrap 0.5
 *
 * Last Revised: July 16, 2012
 */
get_header(); ?>
<div class="jumbotron masthead">
    <div class="container">
  <?php if ( have_posts() ) : while ( have_posts() ) : the_post(); ?>
      <h1><?php the_title();?></h1>
      <?php the_content();?>
    </div>
</div>

<?php endwhile; endif; ?>
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
<?php get_footer();?>
