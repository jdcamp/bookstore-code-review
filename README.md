# Bookstore by Jake Campa 4/28/2017

### Description
_A Drupal website for a bookstore with a custom book review content type_

### Project Requirements
* Create 2 basic pages - an "About" page, and a "Locations" page.
* Enable and configure the Contact module. Include a Contact form with a "Contact" link in the main menu. Make sure that anyone, regardless of their user role, can use the form to send you website feedback.
* Install the Views module, the Features module and the Strongarm module, and all their dependencies. At your code review, to verify that you understand the Features workflow your teacher will look at your Git revision history to verify that your Features modules were each created, committed, modified and then committed again.
* Create a feature called "Site Configuration". Make the feature track the strongarm variables site_name, site_slogan, theme_default and site_frontpage (The URL for the page displayed as your frontpage). Generate the feature in your modules directory, then enable it in the Features management page and then commit the feature with your repository.
* Then change the site's default theme, name and slogan and configure the website so that the "About" page is the front page. Then recreate your Site Configuration feature and commit the changes.
* Create a "Book Review" custom content type. The title field should be labelled "Book Title". It should also include fields for "Book Author", "Rating", and "Review Body".
* The "Book Title", "Book Author", "Rating", and "Review Body" fields should be required.
* The rating should be chosen with either a menu or radio buttons.
* The fields should be in the order "Book Title", "Book Author", "Rating", then "Review Body" when you fill out the form to add an instance of the book review content type.
* Create a feature called "Book Review" for your new content type and then generate it in your modules directory. Then, don't forget to enable the feature in the Features management page and then commit it to your repository.
* Create a view for the Book Review content type called "New Books". Don't bother creating a page for it, just create a block for it. The block should display the 3 newest book reviews as an unformatted list of linked titles, so that users can click on the title of a new book to go read the review of it. Don't use a pager.
* Name the block and display it in an easily visible region. Add at least 4 book reviews to verify that it is working.
* Add the "New Books" view to your "Book Review" feature and then recreate it, generating the files in your modules directory as usual, and then commit your changes.
* Create a custom "Reviewer" role. The Reviewer role should have all the same permissions as an authenticated user, and also be able to create new book reviews. They should be able to edit and delete their own book reviews, but not anyone else's. Create an account for a user who is a Reviewer to test it out.
* Create a special coupon to display as a block on the front page which is visible to authenticated users and not anonymous users. It should say something like "This week: use this coupon code to get 25% off on all Science Fiction!"
* No need to worry about shopping cart functionality.

## Prerequisites
You will need the following things properly installed on your computer.

* [Git](https://git-scm.com/)
* [MAMP](https://www.mamp.info/en/)

_Setup is for MacOS please use corresponding AMP stack with your OS_


## Installation
* `git clone this repository`
* `launch MAMP program`
* `set the Apache Port to 8888 (MAMP)`
* `set the MySQL Port to 8889 (MAMP)`
* `set cloned repo folder as your Document Root (MAMP)`
* `open the phpMyAdmin and import the database backup file (/root/sites/db-backup)`
* `go to privilege and create user (see Sample Database section)`
* `after imported successfully, go to localhost:8888`


## Database
* Database name: bookstore
* Database username: bookstore
* Database password: bookstore
* Site maintenance username: bookstore
* Site maintenance password: bookstore

## Technologies Used
  * Drupal core 7.5.4
  * PHP

## License

  _MIT LICENSE_
  _Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:_

  _The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software._

  _THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE._



# Drupal default README

CONTENTS OF THIS FILE
---------------------

 * About Drupal
 * Configuration and features
 * Installation profiles
 * Appearance
 * Developing for Drupal

ABOUT DRUPAL
------------

Drupal is an open source content management platform supporting a variety of
websites ranging from personal weblogs to large community-driven websites. For
more information, see the Drupal website at http://drupal.org/, and join the
Drupal community at http://drupal.org/community.

Legal information about Drupal:
 * Know your rights when using Drupal:
   See LICENSE.txt in the same directory as this document.
 * Learn about the Drupal trademark and logo policy:
   http://drupal.com/trademark

CONFIGURATION AND FEATURES
--------------------------

Drupal core (what you get when you download and extract a drupal-x.y.tar.gz or
drupal-x.y.zip file from http://drupal.org/project/drupal) has what you need to
get started with your website. It includes several modules (extensions that add
functionality) for common website features, such as managing content, user
accounts, image uploading, and search. Core comes with many options that allow
site-specific configuration. In addition to the core modules, there are
thousands of contributed modules (for functionality not included with Drupal
core) available for download.

More about configuration:
 * Install, upgrade, and maintain Drupal:
   See INSTALL.txt and UPGRADE.txt in the same directory as this document.
 * Learn about how to use Drupal to create your site:
   http://drupal.org/documentation
 * Download contributed modules to sites/all/modules to extend Drupal's
   functionality:
   http://drupal.org/project/modules
 * See also: "Developing for Drupal" for writing your own modules, below.

INSTALLATION PROFILES
---------------------

Installation profiles define additional steps (such as enabling modules,
defining content types, etc.) that run after the base installation provided
by core when Drupal is first installed. There are two basic installation
profiles provided with Drupal core.

Installation profiles from the Drupal community modify the installation process
to provide a website for a specific use case, such as a CMS for media
publishers, a web-based project tracking tool, or a full-fledged CRM for
non-profit organizations raising money and accepting donations. They can be
distributed as bare installation profiles or as "distributions". Distributions
include Drupal core, the installation profile, and all other required
extensions, such as contributed and custom modules, themes, and third-party
libraries. Bare installation profiles require you to download Drupal Core and
the required extensions separately; place the downloaded profile in the
/profiles directory before you start the installation process. Note that the
contents of this directory may be overwritten during updates of Drupal core;
it is advised to keep code backups or use a version control system.

Additionally, modules and themes may be placed inside subdirectories in a
specific installation profile such as profiles/your_site_profile/modules and
profiles/your_site_profile/themes respectively to restrict their usage to only
sites that were installed with that specific profile.

More about installation profiles and distributions:
 * Read about the difference between installation profiles and distributions:
   http://drupal.org/node/1089736
 * Download contributed installation profiles and distributions:
   http://drupal.org/project/distributions
 * Develop your own installation profile or distribution:
   http://drupal.org/developing/distributions

APPEARANCE
----------

In Drupal, the appearance of your site is set by the theme (themes are
extensions that set fonts, colors, and layout). Drupal core comes with several
themes. More themes are available for download, and you can also create your own
custom theme.

More about themes:
 * Download contributed themes to sites/all/themes to modify Drupal's
   appearance:
   http://drupal.org/project/themes
 * Develop your own theme:
   http://drupal.org/documentation/theme

DEVELOPING FOR DRUPAL
---------------------

Drupal contains an extensive API that allows you to add to and modify the
functionality of your site. The API consists of "hooks", which allow modules to
react to system events and customize Drupal's behavior, and functions that
standardize common operations such as database queries and form generation. The
flexible hook architecture means that you should never need to directly modify
the files that come with Drupal core to achieve the functionality you want;
instead, functionality modifications take the form of modules.

When you need new functionality for your Drupal site, search for existing
contributed modules. If you find a module that matches except for a bug or an
additional needed feature, change the module and contribute your improvements
back to the project in the form of a "patch". Create new custom modules only
when nothing existing comes close to what you need.

More about developing:
 * Search for existing contributed modules:
   http://drupal.org/project/modules
 * Contribute a patch:
   http://drupal.org/patch/submit
 * Develop your own module:
   http://drupal.org/developing/modules
 * Follow best practices:
   http://drupal.org/best-practices
 * Refer to the API documentation:
   http://api.drupal.org/api/drupal/7
